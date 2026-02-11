# 🚀 DSA Problem Solving Solutions

<div align="center">

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub Stars](https://img.shields.io/github/stars/khzl/DSA-Problem-Solving-Solutions?style=social)](https://github.com/khzl/DSA-Problem-Solving-Solutions/stargazers)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](./CONTRIBUTING.md)

**A comprehensive collection of Data Structures and Algorithms solutions across multiple programming languages**

[About](#-about) • [Languages](#-languages) • [Structure](#-repository-structure) • [Getting Started](#-getting-started) • [Contributing](#-contributing)

</div>

---

## 📋 About

This repository contains solutions to various Data Structures and Algorithms problems from platforms like LeetCode, HackerRank, and other coding challenges. Each problem is solved in **multiple programming languages** to demonstrate different approaches and language-specific implementations.

### 🎯 Purpose

- **Learn**: Study different algorithms and data structures
- **Compare**: See how the same solution differs across languages
- **Practice**: Use as a reference for interview preparation
- **Contribute**: Share your solutions with the community

### ✨ Key Features

- ✅ Solutions in 5+ programming languages
- ✅ Well-commented and documented code
- ✅ Organized by topics and difficulty
- ✅ Time and space complexity analysis
- ✅ Multiple approaches for complex problems

---

## 💻 Languages

This repository includes solutions in the following languages:

<table>
  <tr>
    <td align="center">
      <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/csharp/csharp-original.svg" width="60" height="60" alt="C#"/><br>
      <b>C#</b>
    </td>
    <td align="center">
      <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" width="60" height="60" alt="C++"/><br>
      <b>C++</b>
    </td>
    <td align="center">
      <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" width="60" height="60" alt="JavaScript"/><br>
      <b>JavaScript</b>
    </td>
    <td align="center">
      <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/typescript/typescript-original.svg" width="60" height="60" alt="TypeScript"/><br>
      <b>TypeScript</b>
    </td>
    <td align="center">
      <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/dart/dart-original.svg" width="60" height="60" alt="Dart"/><br>
      <b>Dart</b>
    </td>
  </tr>
</table>

---

## 📁 Repository Structure

```
DSA-Problem-Solving-Solutions/
│
├── CSharp-Solutions/         # C# implementations
│   ├── Arrays/
│   ├── LinkedLists/
│   ├── Trees/
│   ├── Graphs/
│   ├── DynamicProgramming/
│   └── ...
│
├── Cpp-Solutions/            # C++ implementations
│   ├── Arrays/
│   ├── LinkedLists/
│   ├── Trees/
│   └── ...
│
├── JavaScript-Solutions/     # JavaScript implementations
│   ├── Arrays/
│   ├── LinkedLists/
│   └── ...
│
├── TypeScript-Solutions/     # TypeScript implementations
│   ├── Arrays/
│   ├── LinkedLists/
│   └── ...
│
├── Dart-Solutions/           # Dart implementations
│   ├── Arrays/
│   ├── LinkedLists/
│   └── ...
│
├── CONTRIBUTING.md           # Contribution guidelines
├── LICENSE                   # MIT License
└── README.md                 # This file
```

---

## 📚 Problem Categories

| Category | Description | Status |
|----------|-------------|--------|
| **Arrays** | Array manipulation, searching, sorting | 🟢 Active |
| **Strings** | String operations, pattern matching | 🟢 Active |
| **Linked Lists** | Singly/doubly linked lists | 🟢 Active |
| **Stacks & Queues** | LIFO and FIFO data structures | 🟢 Active |
| **Trees** | Binary trees, BST, AVL, tries | 🟢 Active |
| **Graphs** | Graph traversal, shortest path | 🟢 Active |
| **Dynamic Programming** | Optimization problems | 🟢 Active |
| **Recursion** | Recursive solutions | 🟢 Active |
| **Backtracking** | Constraint satisfaction | 🟢 Active |
| **Greedy Algorithms** | Optimization strategies | 🟢 Active |
| **Bit Manipulation** | Binary operations | 🟢 Active |
| **Math** | Mathematical problems | 🟢 Active |

---

## 🚀 Getting Started

### Prerequisites

Make sure you have the following installed:

- **C#**: .NET SDK 6.0 or higher
- **C++**: GCC/G++ compiler or Visual Studio
- **JavaScript**: Node.js (LTS version)
- **TypeScript**: TypeScript compiler (`npm install -g typescript`)
- **Dart**: Dart SDK 2.15 or higher

### Clone the Repository

```bash
git clone https://github.com/khzl/DSA-Problem-Solving-Solutions.git
cd DSA-Problem-Solving-Solutions
```

### Running Solutions

#### C# Solutions
```bash
cd CSharp-Solutions/Arrays
dotnet run Program.cs
```

#### C++ Solutions
```bash
cd Cpp-Solutions/Arrays
g++ -o solution solution.cpp
./solution
```

#### JavaScript Solutions
```bash
cd JavaScript-Solutions/Arrays
node solution.js
```

#### TypeScript Solutions
```bash
cd TypeScript-Solutions/Arrays
tsc solution.ts
node solution.js
```

#### Dart Solutions
```bash
cd Dart-Solutions/Arrays
dart run solution.dart
```

---

## 📖 Solution Format

Each solution follows a consistent format for easy understanding:

```cpp
/*
 * Problem: Two Sum
 * Difficulty: Easy
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/two-sum/
 * 
 * Description:
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers that add up to target.
 * 
 * Approach:
 * Using hash map for O(n) time complexity
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
```

---

## 🤝 Contributing

Contributions are what make the open-source community an amazing place to learn and grow. Any contributions you make are **greatly appreciated**!

### How to Contribute

1. **Fork** the repository
2. **Clone** your fork: `git clone https://github.com/your-username/DSA-Problem-Solving-Solutions.git`
3. **Create** a new branch: `git checkout -b feature/new-solution`
4. **Add** your solution following the repository structure
5. **Commit** your changes: `git commit -m 'Add solution for problem XYZ'`
6. **Push** to the branch: `git push origin feature/new-solution`
7. **Open** a Pull Request

Please read [CONTRIBUTING.md](./CONTRIBUTING.md) for detailed guidelines.

### Contribution Guidelines

- Follow the existing code structure and naming conventions
- Include problem description, approach, and complexity analysis
- Test your solution before submitting
- Implement the solution in at least one language (bonus for multiple!)
- Ensure code is well-commented and readable

---

## 📊 Progress Tracker

Track the repository's growth:

| Language | Problems Solved | Last Updated |
|----------|----------------|--------------|
| C# | 50+ | 2026-02-09 |
| C++ | 50+ | 2026-02-09 |
| JavaScript | 30+ | 2026-02-09 |
| TypeScript | 30+ | 2026-02-09 |
| Dart | 25+ | 2026-02-09 |

---

## 🔗 Useful Resources

### Learning Platforms
- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/)
- [CodeForces](https://codeforces.com/)
- [GeeksforGeeks](https://www.geeksforgeeks.org/)

### Language Documentation
- [C# Documentation](https://docs.microsoft.com/en-us/dotnet/csharp/)
- [C++ Reference](https://en.cppreference.com/)
- [JavaScript MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
- [TypeScript Docs](https://www.typescriptlang.org/docs/)
- [Dart Documentation](https://dart.dev/guides)

### Books
- "Introduction to Algorithms" by CLRS
- "Cracking the Coding Interview" by Gayle Laakmann McDowell
- "Algorithm Design Manual" by Steven Skiena

---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

---

## 💬 Contact

**Repository Maintainer**: [khzl](https://github.com/khzl)

- 📧 Email: khzl.dev@gmail.com
- 🐙 GitHub: [@khzl](https://github.com/khzl)
- 💼 Issues: [Report a bug or request a feature](https://github.com/khzl/DSA-Problem-Solving-Solutions/issues)

---

## ⭐ Show Your Support

If you find this repository helpful, please consider giving it a ⭐️ star!

It helps others discover this project and motivates me to keep improving it.

---

## 🙏 Acknowledgments

- Thanks to all contributors who help improve this repository
- Inspired by the coding community on LeetCode, HackerRank, and other platforms
- Special thanks to open-source community for their continuous support

---

<div align="center">

**Happy Coding! 🚀**

Made with ❤️ by [khzl](https://github.com/khzl)

</div>