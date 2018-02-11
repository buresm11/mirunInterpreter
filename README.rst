Interpreter
=======

Interpreter for small static typed language.

Get up
===============

Requirement
-----------
* cmake version > 3.5 (tested on version 3.5.1)

| ``clone repository``  
| ``mkdir build``  
| ``cmake ..``  
| ``make``  

Running
===============

``interpreter filename``

Syntax
===============

* top level acts like a function and must return an integer
* primitive variables are passed by value
* arrays are passed by pointer

Variables
------------

All variables must be initialized first.

.. code-block:: c

	int a;     // initialized to zero
	bool b;    // initialized to false
	string c;  // initialized to empty string

	int array[10]; // array of ints
	bool array[10]; // array of bools
	string array[10]; // array of strings


Built-In functions
------------------

* **print(object)** - prints any object
* **println(object)** - prints any object and adds a newline
* **scan(object)** - reads a value from user and stores it into an object

.. code-block:: c

	int i;
	i = 5;
	print(i);

	scan(i);

	int array[10];

	scan(array[5]);


Operations
----------

* int supports: + , - , * , / , % , == , != , >= , <= , < , >
* bool supports: || , && , == , !=
* string supports: == , != 

Condition
------------

.. code-block:: c

	if x == y-1 do
		call();
	else if x == y+1 do
		call();
	else if x == y do
		call();
	else do
		call();
	end

Cycle
------------

.. code-block:: c

	while i < n do
		i=i+1;
	end

Functions declaration
------------

.. code-block:: c

	def int func(int array[], int count) // declaration of function with two arguments that returns integer
		return 0;
	end

	int array[5];
	func(array, 5); // function cal

Example
----------

**Insertion sort:** 

.. code-block:: c

	def int insertion_sort(int array[], int count)
		int x;
		x = 1;

		while x < count do
			int y;
			y = x;

			while y > 0 do

				if array[y-1] > array[y] do
					int tmp;
					tmp = array[y-1];
					array[y-1] = array[y];
					array[y] = tmp;
				end

				y = y-1;
			end
			x = x+1;
		end

		return 1;
	end

Errors
------

* Error(1, "Unknown number"));
* Error(2, "Integer out of range"));
* Error(3, "Operator ? unsupported types" ));
* Error(4, "Index is not a number"));
* Error(5, "Unexpexted type " + type));
* Error(6, "Cannon create array sized 0"));
* Error(7, "Variable " + name + " is already defined in current scope" ));
* Error(8, "Variable " + name + " not found"));
* Error(9, "Cannon assign to" + name + " bad type"));
* Error(10, "Variable " + name + " not indexable"));
* Error(11, "Index out of bounds"));
* Error(12, "If | Elseif Condition is not bool"));
* Error(13, "Unknown type"));
* Error(14, "Syntax error"));
* Error(15, "Function " + name + " is already defined in current scope" ));
* Error(16, "IO error" ));
* Error(17, "EOF reached" ));
* Error(18, "Format problem" ));
* Error(19, "Function " + name + " not found"));
* Error(20, "Function call " + name + " incorrect number of arguments"));
* Error(21, "Function call " + name + " array arg type does not match"));
* Error(22, "Function call " + name + " arg array / nonarray mismatch"));
* Error(23, "Function call " + name + " arg type does not match"));
* Error(24, "Function call " + name + " missing return"));
* Error(25, "Heap full" ));

