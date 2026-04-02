# AI Explorer Robot

The project is an experimental platform for practicing AI in a real world environment. It gives the opportunity to work with artificial intelligence on a physical robot that can move on its own and runs on a built in battery. The robot is equipped with sensors, a camera, speaker, and a microphone, and is controlled by an embedded neural network. The system is based on a Raspberry Pi 5 with a Raspberry Pi AI HAT+ 2 accelerator, which allows it to process visual data and make decisions in real time without needing a cloud connection.The main idea of this platform is learning and experimentation. You can develop, test, and run different neural network models directly on the device. There is also support for loading models directly from an SSD,so you can easily switch between different AI models depending on what you are trying to do. The robot can navigate on its own, recognize objects, interact with its environment, and respond to user commands.

## Why I made this
I wanted to create a physical platform for AI that would allow people study how to use it in real world settings, testing and exploring how it works.

## Main Hardware
- Raspberry Pi 5
- Raspberry Pi AI HAT+ 2
- Tracked robot chassis
- BTS7960 motor driver
- DC-DC buck converter
- IR illumination boards
- onboard battery system

## CAD Design
The full project CAD assembly is included as:
'\AI-Explorer-Robot\cad\AI_Explorer_Robot.STEP'

## Wiring Diagram
The wiring diagram are documented in:
'\AI-Explorer-Robot\docs\wiring_diagram.png'

## Firmware
The initial firmware structure is included for design verification:
- '\firmware\esp32\' - basic motor control logic
- '\firmware\raspberry_pi\' - testing an AI human detection model

This firmware is currently an early prototype and will be further refined during the build phase.

## Bill of Materials
The complete BOM with links and costs is available in:
'bom.csv'

## Repository Structure
- 'cad/' - CAD exports
- 'firmware/' - control and AI software
- 'docs/' - diagrams
- 'assets/' - CAD renders
