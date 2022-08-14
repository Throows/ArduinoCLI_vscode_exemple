# **Arduino CLI and VSCode integration workpace**

Need to install the Arduino CLI and VSCode extensions. ? [Talk on discord](https://www.arduino.cc/en/Main/Software) or [Open a discussion](https://github.com/Throows/ArduinoCLI_vscode_exemple/discussion).

# Contents
 - [Introduction](#introduction)
 - [How to Install](#how-to-install)
 - [Development Planning](#development-planning)
 - [Documentation](#documentation)
 - [Frequent Issues](#frequent-issues)
 - [Contributing](#contributing)

## Introduction

### Why do we need this?
First of all while arduino is migrating to the IDE 2.0 and doing a lot of changes. As the old IDE dont fit with 2022 expectations, we need to integrate arduino to VS Code. Existing plugins are outdated0/not working. 

We aim to solve those issues (VSCode arduino Extension):
 - Support IDE 2.0 [#1177](https://github.com/microsoft/vscode-arduino/issues/1477)
 - Failed to generate IntelliSense configuration [#1373](https://github.com/microsoft/vscode-arduino/issues/1373)
 - IntelliSense doesn't show library errors [#1376](https://github.com/microsoft/vscode-arduino/issues/1376)


This repository is destinated to show a simple way to integrate arduino to VS Code with intellisence AND Error reporting.
We added build output to make build a lot faster.

## How To Install
 1 - Clone repository\
 2 - Install Task Button extension [Here](https://marketplace.visualstudio.com/items?itemName=spencerwmiles.vscode-task-buttons)\
 3 - Setup board/Include files in c_cpp_properties.json and task.json (working with esp32:esp32:esp32 S2 and S3, arduino:avr:uno and arduino:avr:mega)\
 4 - Use tasks button in the buttom bar to compile and upload your code to the board (Compile program / Upload program / Monitor program) 

## Development Planning

For now the way to make think work properly is by adding task. But in the future an simple arduino-cli plugin extension integration is under heavy development.
And add shortcuts too.

## Documentation
 
    Under Heavy Development

## Frequent Issues

If any issues encountered pls refer tho the issues section. [Here](https://github.com/Throows/ArduinoCLI_vscode_exemple/issues/new)


## Contributing

All contributions are welcome. :upside_down: