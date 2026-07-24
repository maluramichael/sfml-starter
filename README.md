# sfml-starter

Ein Startgerüst für C++-Spiele mit SFML, CMake und tinyxml2. Ich wollte nicht jedes Mal wieder Fenster, Build-Setup und Bibliotheken von Hand zusammensuchen.

## Was drin ist

`project/main.cpp` öffnet ein 800x600-Fenster, zeichnet ein weißes Rechteck und liest zum Test einen Namen aus dem Texture-Atlas `bin/isometric.xml`. Daneben liegt unter `lib/framework` der Anfang eines eigenen Frameworks mit einer `Map`- und einer davon abgeleiteten `TiledMap`-Klasse. Beide sind praktisch leer, die Map kennt bisher nur ihre Ausmaße.

SFML und tinyxml2 hängen als Submodule unter `lib` und werden mitgebaut, es muss also nichts systemweit installiert sein.

## Bauen und starten

```bash
git clone --recursive git@github.com:maluramichael/sfml-starter.git
cd sfml-starter
./build_and_run
```

Das Skript legt ein `build`-Verzeichnis an, ruft CMake und make auf und startet danach die Binary aus `bin`. Arbeitsverzeichnis beim Start ist `bin`, weil die Assets dort liegen.

## Hinweis

Das ist Boilerplate, kein Spiel. Der Standard steht auf C++11, CMake ab 3.4. Zum Weiterbauen taugt es, fertig ist daran nichts.
