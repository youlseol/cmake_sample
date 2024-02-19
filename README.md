CMake를 사용하여 프로젝트를 빌드하고 사용하는 과정은 몇 가지 기본 단계로 나눌 수 있습니다. 여기서는 간단한 예제를 통해 CMake의 기본적인 사용 방법을 설명하겠습니다.

### 1. CMakeLists.txt 파일 작성

프로젝트의 루트 디렉토리에 `CMakeLists.txt` 파일을 작성합니다. 이 파일은 프로젝트의 빌드 설정을 정의하는 CMake 스크립트입니다. 예를 들어, 단순한 C++ 프로젝트에 대한 `CMakeLists.txt` 파일은 다음과 같이 작성할 수 있습니다:

```cmake
cmake_minimum_required(VERSION 3.0) # CMake 최소 버전 요구
project(HelloWorld) # 프로젝트 이름

# 실행 파일을 생성하고, main.cpp를 그 실행 파일의 소스로 지정
add_executable(hello_world main.cpp)
```

### 2. 빌드 디렉토리 생성

소스 디렉토리 외부에 빌드 디렉토리를 생성합니다. 이는 소스 디렉토리를 깨끗하게 유지하는 데 도움이 됩니다.

```bash
mkdir build
cd build
```

### 3. CMake 구성

빌드 디렉토리에서 CMake를 구성하여 Makefile 또는 다른 빌드 시스템 파일들을 생성합니다. CMake는 자동으로 프로젝트의 `CMakeLists.txt` 파일을 찾아서 사용합니다.

```bash
cmake ..
```

여기서 `..`는 CMakeLists.txt가 있는 상위 디렉토리를 가리킵니다.

### 4. 빌드 실행

CMake가 생성한 빌드 시스템을 사용하여 프로젝트를 빌드합니다. Unix 기반 시스템에서는 보통 `make` 명령어를 사용합니다.

```bash
make
```

이 과정을 통해 지정된 소스 파일(`main.cpp`)로부터 실행 파일이 `build` 디렉토리 내에 생성됩니다. `CMakeLists.txt`에서 실행 파일의 이름을 `hello_world`로 지정했다면, `build` 디렉토리 내에 `hello_world` 실행 파일이 생성됩니다.

### 5. 실행 파일 사용

## hello_world.cpp

```cpp
#include <iostream>

int main() {
    // "Hello, World!"를 콘솔에 출력
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

빌드 과정이 성공적으로 완료되면, 생성된 실행 파일을 직접 실행할 수 있습니다. 이를 위해 터미널에서 다음 명령을 사용합니다.

```bash
./hello_world
```

이 명령은 현재 디렉토리(`build`) 내의 `hello_world` 실행 파일을 실행합니다. 실행이 성공적으로 이루어지면, 터미널에 "Hello, World!"라는 메시지가 출력됩니다.

이렇게 CMake를 사용하여 프로젝트를 빌드하고 실행 파일을 생성하는 기본적인 과정을 완료할 수 있습니다. CMake는 크로스 플랫폼 빌드를 지원하므로, 다양한 시스템과 컴파일러에 대해 유사한 과정을 거칠 수 있습니다.

CMake의 고급 기능을 사용하면 더 복잡한 프로젝트 구성, 라이브러리 의존성 관리, 테스트 자동화 등 다양한 작업을 수행할 수 있습니다. CMake 공식 문서나 다양한 온라인 자료를 참고하여, 필요한 기능을 탐색하고 적용해 보세요.


### 주의사항

- 실행 파일의 위치는 `CMakeLists.txt` 파일과 프로젝트의 구조에 따라 달라질 수 있습니다. 일반적으로 실행 파일은 `build` 디렉토리 내에 위치하지만, 프로젝트의 설정에 따라 다른 위치에 생성될 수도 있습니다.
- 실행 파일을 실행하기 전에, 해당 파일이 실행 가능한 상태인지 확인하는 것이 좋습니다. 파일에 실행 권한이 없는 경우, `chmod +x hello_world` 명령을 사용하여 실행 권한을 부여할 수 있습니다.
- 위의 예제와 명령어는 Linux 또는 macOS 터미널 기반으로 설명되었습니다. Windows에서는 CMake와 Visual Studio를 함께 사용하여 프로젝트를 빌드하고 실행할 수 있으며, 실행 파일은 `.exe` 확장자를 가집니다.

CMake를 사용한 프로젝트 빌드와 실행 파일 실행 과정은 이처럼 간단하며, 크로스 플랫폼 프로젝트를 관리하는 데 있어 매우 유용한 도구입니다.




- Boost - 휴대성과 성능을 중시하는 C++ 라이브러리 모음.
- Qt - 크로스 플랫폼 GUI 애플리케이션 개발 프레임워크.
- OpenCV - 컴퓨터 비전을 위한 오픈 소스 라이브러리.
- Eigen - C++로 작성된 고성능 수학 라이브러리, 특히 선형 대수 연산에 사용.
- OpenGL - 크로스 플랫폼 API로, 2D 및 3D 벡터 그래픽을 렌더링하는데 사용.
- GLEW (OpenGL Extension Wrangler Library) - OpenGL의 확장 기능을 쉽게 사용할 수 있게 해주는 크로스 플랫폼 오픈 소스 라이브러리.
- SDL (Simple DirectMedia Layer) - 멀티미디어 애플리케이션 개발을 위한 크로스 플랫폼 개발 라이브러리.
- SFML (Simple and Fast Multimedia Library) - 다양한 멀티미디어 애플리케이션 개발을 위한 간단하고 빠른 API.
- CUDA - NVIDIA의 GPU를 사용한 병렬 컴퓨팅을 위한 개발 플랫폼과 API.
- OpenMP - 멀티프로세싱 프로그래밍을 위한 API.
- GTK - GNOME 데스크탑 환경을 위한 멀티플랫폼 툴킷.
- PCL (Point Cloud Library) - 포인트 클라우드 처리와 관련된 2D/3D 이미지 및 포인트 클라우드 처리를 위한 대규모 라이브러리.
- VTK (The Visualization Toolkit) - 3D 컴퓨터 그래픽스, 이미지 처리 및 시각화를 위한 소프트웨어 시스템.