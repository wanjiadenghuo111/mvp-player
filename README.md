/////////////////////////// INTRODUCTION ///////////////////////////////////////

* MVP-PLAYER is a music player showing a great pattern: the model view presenter

* Done by Eloi du Bois

* LICENSE: LGPLv3 (except for the SoundPlayer.cpp file which is using fmod. Please check fmod license before using this)

This is a proof of concept of a my personal way to implement the 
model view presenter pattern.

This project's goal is to show a easy powerful way to deal with multiple GUI.
To me, this (or similar) should exists on every C++ projects.

////////////////////////////////////////////////////////////////////////////////

## Compilation

To compile, you will need Qt5, Boost, Fmod, ncurses, cdk and scons:

* QT5: http://www.qt.io/download/
* Boost: http://www.boost.org/users/download/
* FMOD: http://www.fmod.org/
* NCURSES: http://ftp.gnu.org/pub/gnu/ncurses/
* CDK: http://invisible-island.net/cdk/


First, clone the repository:

```
git clone https://github.com/edubois/mvp-player.git
cd mvp-player
git submodule update -i
```
This should bring tools/sconsProject

now, go into tools/sconsProject

and do (this is mandatory):

```git checkout precompiled_header_proposal```


Now, it's time to edit default.sconf according to your configuration.
In the default configuration, I made a parent directory 3rdParties where I put
my 3rd party libraries. To change your external libraries base dir, 
edit the variable extern in this file (default.sconf).
If you are using Mac, adapt the last lines according to your
XCode configuration.
If you are not using Mac, remove the lines after '# Mac only'

## Running

When you are ready, enter:

* if you want the ncurses console player:

```scons mode=release mvp_player_ncurses```

* or, if you want the QT player:

```scons mode=release mvp_player_qt```

This should build an executable showing a player dialog, where you can play a music (I tried .wav, mp3 and playlist m3u, it was working well on both GUI).

## Tags
I put some tags so you can have a better understanding of the different developement steps.

To switch to a tag, please use ```git checkout tag_name```

* ```version_simple_player```

This is a 'simple' version of the player, using a synchronous state machine (easier)

* ```version_asynchronous_player_state_machine```

This is a version of the player using an asynchronous state machine (a little bit more difficult to understand)

* ```version_with_network_support```

This is a version with support of network remote player.

