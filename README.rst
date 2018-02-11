Shooter
=======

Description

Instalace
===============

The following is a SQL statement.

.. code-block:: sql

   SELECT * FROM mytable

Syntex jazyka
===============

Installation
------------

``python setup.py install``

Usage
-----

``python -m shooter``

Keys
------------------

* **Space** - shoots missiles, holding space will increase missile power
* **Left** - rotates cannon counterclockwise
* **Right** - rotates cannon clockwise
* **Up** - moves cannon up
* **Down** - moves cannon down
* **Q** - switches between simple (static enemies, missiles ignore gravity) and smart (enemy moves, missiles drop to ground)
* **W** - switches between one missile/two missile mode
* **A** - decreases gravity
* **S** - increases gravity
* **E** - loads game from file
* **R** - reset save file, all saved progress will be lost
* **T** - saves game to file
* **U** - step back


Usage of patterns
------------------

* **Strategy** pattern is used for moving missile. Misssile that uses SimpleStrategy does not use gravity. Misssile that uses SmartStrategy uses gravity and acts like a ballistic missile.
* **Proxy** pattern is used for accesing model.
* **State** patter is used to decide whether cannon fires one or two missiles. If cannon uses OneMissileCannonState it fires one missile. If cannon uses TwoMissileCannonState it fires two missiles.
* **Visitor** pattern is used for saving state of model to a file.
* **Observer** is used for informing view that model has changed. Model registers view as observer and then notify it when needed.  
* **Memento** patter is used by model for undo. Model can save its state to memento and then go back to its previous state.
* **Command** pattern handle user input. Whenever user press key a command is created. Command also creates new memento for saving state.
* **Abstract Factory** pattern creates new missiles and enemies. SimpleFactory creates enemies that do not move and missiles that use SimpleStrategy. SmartFactory creates enemies that move and missiles that use SmartStrategy.
