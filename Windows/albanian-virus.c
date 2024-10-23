#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main() {
    MessageBox(
        NULL,
        "👋 Hi there! I’m the Albanian Virus. Due to the limited technology in my country, I can't actually harm your computer. 🙈 Please take a moment to delete one of your important files yourself and kindly share me with others. Thank you for your cooperation! 😊\n\nBest regards,\nAlbanian Virus",
        "🚨 Virus Alert!",
        MB_ICONERROR | MB_YESNOCANCEL | MB_DEFBUTTON1
    );

    return 0;
}
