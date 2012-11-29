C++ Observations
================

This repo is a gathering of all my observations while trying to learn
C++.

About Me
--------

I come from a background of Web Development and heavy use in PHP. My
coding style is very object-oriented.

I have no specifically defined style of writing code, so certain things
about my writing style may change.

Table Of Contents
-----------------

-	<h3>Pointers</h3>
	Of and relating to all things pointers!
	1.	<h4>variablesGoneMissing.cpp</h4>
		In this code, I’m trying to prove to myself the importance of
		passing constant references. I tried to demonstrate how a
		pointer can be lost forever.
		
		I'm not 100% sure if I got the idea of why constants are important
		or not, but it made for a very interesting result regardless.
	2.  <h4>leakingMemoryFromAnotherVariable.cpp</h4>
		In this code, I’m showing how you can overwrite the value of a
		variable while leaking into the memory of another unknown memory
		address.