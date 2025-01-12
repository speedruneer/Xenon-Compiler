# Xenon Compiler

Welcome to the Xenon Compiler! This project compiles Xenon code into custom assembly language, designed for ease of use and simplicity.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Xenon is a programming language that focuses on simplicity and efficiency. The Xenon Compiler translates Xenon code into a custom assembly language that is easy to understand and manipulate.

## Installation

To install the Xenon Compiler, follow these steps:

1. TODO


## Usage

To use Xenon-Compiler, follow these steps:

1. Group all libraries (.luac) into an include folder
2. In the same folder, group all libraries (.xe) and (.xec)
3. Then open CMD/PS/Bash/Any cli, and type xec <main_file> [include_folder] <output_file> [-?]

You can use the many arguments possible for compiling:
-S -> Stores output logs into logs.xml
-D -> Uses debugging mode
-I -> Include every default libraries
-L -> Low level compiling, compiles everything into a singular file (dependencies aswell)
-A -> Compile to pure .asm
-B -> Compile to .asm then assemble into a .bin
-C -> Compile to .xec for compiled console programs
