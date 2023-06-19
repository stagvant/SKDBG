# SKDBG - Goldhen Plugin for Playstation4

## Versions supported

- Application version:1.00

## Releases supported

#### Sekiro Shadows Die Twice

- CUSA12047 America
- CUSA13801 Europe
- CUSA13909 Japan
- CUSA13910 Australia

## Features

- Modifies Sekiro Shadows Die Twice a FromSoftware game before boot.
- Activates a way to enable the overworld debug camera with combo.
- Redirects lock on target button to take control of an entity.
- Activates developer menu which grants more freedom.
- Additionally framepacing issues were fixed.

## Overworld debug camera

In order to activate the debug camera you have to press\
triangle button while the left joystick is pressed down.\
Developer menu assists on pausing current game runtime.\
By pressing the upper left of the touchpad activates it.\
Navigating to [SYSTEM] option and press circle.\
![SK1](https://github.com/stagvant/SKDBG/assets/131619524/6b0c433a-c693-4d8d-aab8-fa823a6c1e96)\
Then navigate to [MoveMapStep] and press circle.\
![SK2](https://github.com/stagvant/SKDBG/assets/131619524/81f54941-800d-41bd-81df-1725c8d2bb3d)\
Finally navigate to Pause and switch from Off to On.\
![SK3](https://github.com/stagvant/SKDBG/assets/131619524/21c325e6-b5ca-4992-80a3-6dc0e5fb3a12)\
Congratulations you managed to pause the current session!\
Additionally all entities will freeze while pause is active.\
By selecting skip option and pressing circle will allow one\
to step through a small number of frames till freezes again.

## Entity manipulation

In order to takeover the control of an entity you have to\
hold down right joystick as if were trying to lock on it.

By the moment you lock on the target the system will\
pass over the controls for manipulating the enemy AI\
Be aware due to the nature of how this mod works you\
will not be able to lock on target normally anymore.

You can get back to the initial entity you\
controlled by holding down left joystick.

## Known Bugs and Issues

Should be mentioned for your own sanity to make sure of turning off the lock-on and\
lock on target from the options menu to prevent passing back and forth of controls.\
Additionally do not wander too far from your default entity or you will get despawned.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/99K883B7XG#5L6jlq0yE3yw) for displaying developer menu
- Knowledge on how to make a backup copy of a game
- Knowledge on how to setup a plugin to run properly

## Toolchains used

- [LLVM 10](https://github.com/llvm/llvm-project)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Toolchain authors

- [The LLVM Team](https://github.com/llvm)
- [The Goldhen Team](https://github.com/Goldhen)
- [The OpenOrbis Team](https://github.com/OpenOrbis)

## Consider donating

- [Option1](https://ko-fi.com/stagvant)
- [Option2](https://buymeacoffee.com/stagvant)

## License

SKDBG is released under the [GPLv3 License](https://github.com/stagvant/SKDBG/blob/main/LICENSE).
