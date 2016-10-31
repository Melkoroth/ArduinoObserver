// #############################################################################
// #
// # Name       : Observer pattern implementation meant for Arduino
// # Version    : 1.0
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
// # Date       : 31.10.2016
//
// # Description: All the magic goes into the classes, not much to see here
//
// #  This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// #############################################################################

#include "Sequence.h"
#include "ObserverPattern.h"
#include "ObservablePattern.h"
#include "ObserverConcrete.h"
#include "ObservableConcrete.h"

CounterObservable clock;
SerialObserver ui;

void setup() {
  Serial.begin(9600);
  //Attach observer to observable
  clock.attach(&ui);
}

void loop() {
  clock.tick();
  delay(100);
}