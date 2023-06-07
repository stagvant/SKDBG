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

## Overworld debug camera

In order to activate the debug camera you have to press\
triangle button while the left joystick is pressed down.

This way it will detach camera from the character and\
freeze everything at place. While using debug camera\
you can press square to make a frame by frame step\
or press it indefinately to unfreeze everything.

You can quit the debug camera by pressing triangle\
button while the left joystick is pressed down.

## Enemy control manipulation

In order to takeover the control of an entity you have to\
hold down right joystick as if were trying to lock on it.

By the moment you lock on the target the system will\
pass over the controls for manipulating the enemy AI\
Be aware due to the nature of how this mod works you\
will not be able to lock on target normally anymore.

You can get back to the default entity you were in control\
by performing the same actions to manipulate other entities.

## Known Bugs and Issues

Should be mentioned for your own sanity to make sure of turning off the lock-on and\
lock on target from the options menu to prevent passing back and forth of controls.\
Additionally do not wander too far from your default entity or you will get despawned.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- Knowledge on how to setup a plugin to run properly

## Toolchains used

- [LLVM 10](https://llvm.org/)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Credits

- [Everyone at OpenOrbis Team](https://github.com/OpenOrbis)
- [Everyone at Goldhen Team](https://github.com/Goldhen)

## Consider donating

- [Option1](https://ko-fi.com/stagvant)
- [Option2](https://buymeacoffee.com/stagvant)

## License

SKDBG is released under the [GPLv3 License](https://github.com/stagvant/SKDBG/blob/main/LICENSE).
