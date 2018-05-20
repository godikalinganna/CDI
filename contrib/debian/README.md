
Debian
====================
This directory contains files used to package cdid/cdi-qt
for Debian-based Linux systems. If you compile cdid/cdi-qt yourself, there are some useful files here.

## cdi: URI support ##


cdi-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cdi-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cdiqt binary to `/usr/bin`
and the `../../share/pixmaps/cdi128.png` to `/usr/share/pixmaps`

cdi-qt.protocol (KDE)

