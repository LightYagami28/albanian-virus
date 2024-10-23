# Albanian Virus 🦠

![Windows 10 screenshot of the Albanian Virus meme](./screenshot.png)

A playful recreation of the famous [Albanian Virus meme](https://www.reddit.com/r/masterhacker/comments/hbo7j2/the_virus_no_one_can_beat/) 😂.

### Features ✨

- **Written in C**: Easily compile it to an `.exe` file and share it with friends for a fun prank. 🎉
- **Minimal Code**: Just 11 lines of code with no external dependencies. 📝
- **Windows Native**: Runs natively on Windows using the Win32 API for the pop-up. It can also be executed on Linux, macOS, or other platforms via Wine. 💻

### Compiling Instructions ⚙️

To compile the program, ensure you have [Zig](https://ziglang.org/) installed. Then, run the following command in your terminal:

```sh
zig cc albanian-virus.c -target x86_64-windows-gnu -o virus.exe
```

While other C compilers may work, `zig cc` is recommended for its ease of cross-compilation (as I primarily use non-Windows systems). 🚀
