# SimpleChat 멀티플레이어 시스템

이 프로젝트는 언리얼 엔진을 기반으로 한 멀티플레이어 채팅/숫자 야구 시스템입니다.  
플레이어는 UI 위젯(Editable Text Box)을 통해 메시지를 입력하고, 입력된 메시지는 플레이어 컨트롤러를 통해 서버로 전송됩니다.  
서버에서는 게임 모드가 입력 메시지를 받아 판정 로직(숫자 야구 계산 등)을 실행하며, 그 결과를 모든 클라이언트에 브로드캐스트하여 뷰포트에 로그로 출력합니다.

---

## 구성 요소

### 1. UChatUserWidget (위젯)
- **역할**:  
  플레이어가 텍스트를 입력할 수 있는 Editable Text Box를 포함하는 위젯입니다.
- **주요 기능**:
  - `OnTextCommitted` 이벤트에서 플레이어가 엔터를 누르면 입력 텍스트를 정제합니다.
  - 정제된 텍스트를 소유한 PlayerController의 `SendMessageToServer()` 함수로 전달합니다.
  - 메시지 전송 후 텍스트박스의 내용을 초기화(빈 텍스트로 설정)합니다.

### 2. ASimpleChatPlayerController (플레이어 컨트롤러)
- **역할**:  
  위젯에서 받은 입력 메시지를 서버로 전송하고, 서버 RPC를 통해 GameMode의 판정 로직을 호출합니다.
- **주요 기능**:
  - `SendMessageToServer(const FString& Message)`: 위젯에서 받은 메시지를 서버 RPC 함수 `ServerReceiveMessage()`로 전달합니다.
  - `ServerReceiveMessage()`: 서버에서 실행되는 RPC 함수로, 현재 GameMode를 가져와 캐스팅 후 `JugmentPlayerInput()`을 호출합니다.
  - `ServerLoginWithID()`: 사용자 ID를 서버에 등록하는 기능을 제공합니다.
  - `ClientBroadcast()`: 서버가 메시지를 브로드캐스트할 때, 각 클라이언트의 화면에 메시지를 출력합니다.
  - BeginPlay에서 타이머를 사용해 위젯을 찾아 바인딩하는 로직 등 추가적인 초기화 작업을 포함합니다.

### 3. ASimpleChatGameMode (게임 모드)
- **역할**:  
  서버 권한에서 게임의 핵심 로직(숫자 야구 판정 등)을 실행합니다.
- **주요 기능**:
  - `InitializeGame()`: 게임 시작 시 UGenerateRandomNumber를 사용해 중복 없는 3자리 난수를 생성하고, 시도 횟수를 초기화합니다.
  - `JugmentPlayerInput(const FString& PlayerInput)`: 클라이언트에서 전달받은 입력 메시지를 파싱하여 숫자 야구 판정을 수행합니다.
    - 입력 문자열의 유효성을 검사하고, 필요한 경우 경고 메시지를 뷰포트에 출력합니다.
    - 판정 결과에 따라 승리 처리, 시도 횟수 감소, 또는 게임 리셋 로직을 실행합니다.
  - 결과 및 상태 업데이트는 `GEngine->AddOnScreenDebugMessage()`와 `UE_LOG()`를 사용하여 뷰포트에 출력됩니다.

---

## 동작 흐름

1. **플레이어 입력**  
   - 플레이어는 UI 위젯(Editable Text Box)에 메시지(예: “/123”)를 입력하고 엔터키를 누릅니다.
   - UChatUserWidget의 `OnTextCommitted` 이벤트가 호출되어 입력 텍스트를 정제한 후, 자신의 소유자(Owner)인 PlayerController의 `SendMessageToServer()` 함수를 호출합니다.

2. **메시지 전송 (플레이어 컨트롤러)**  
   - `SendMessageToServer()`는 입력된 메시지를 서버 RPC 함수 `ServerReceiveMessage()`로 전달합니다.
   - 이때, 클라이언트에서 호출된 함수는 서버에서만 실행됩니다.

3. **메시지 처리 (서버)**  
   - `ServerReceiveMessage_Implementation()` 함수는 서버에서 실행되어, 현재 월드의 GameMode를 가져와 `Cast` 후 `JugmentPlayerInput()`을 호출합니다.
   - GameMode는 입력 메시지를 파싱하고 판정 로직을 수행하여 결과를 결정합니다.
   - 필요에 따라, 서버는 결과 메시지를 `ClientBroadcast()` 또는 멀티캐스트 RPC를 통해 모든 클라이언트에 전달할 수 있습니다.

4. **디버그 및 결과 표시**  
   - `GEngine->AddOnScreenDebugMessage()`와 `UE_LOG()`를 통해 각 단계의 로그를 뷰포트에 출력합니다.
   - 리슨 서버 환경에서는 호스트가 서버와 클라이언트 역할을 겸하므로 로그가 중복으로 출력될 수 있습니다.

---
