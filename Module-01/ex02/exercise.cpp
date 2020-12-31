// First, make a Zombie class. Make it contain a type, and a name (at least),
// and add an announce() member function, that will output something along the lines of:
// <name (type)> Braiiiiiiinnnssss...

// Whatever you want, really, as long as you output the name and type of the Zombie.
// After this, you will create a ZombieEvent class.
// It will have a setZombieType func- tion,that will store a type in the object,
// and a function Zombie* newZombie(std::string name) that will create a Zombie with the chosen type,
// name it, and return it.
You will also make a randomChump function, that will create a Zombie with a random name,
and make it announce itself. Whatever "random" method you choose, truly ran- dom names or a random
choice from a pool of names, is fine.
You must turn in a full program, main included, with enough to prove that what you made
works as required. For example, make your newly created Zombies announce themselves.
Now the actual point of the exercise: Your Zombies must be destroyed at
appropriate times (so, when they are not needed anymore).
They must also be allocated in the ap- propriate fashion: Some times it’s appropriate to have
them on the stack, at other times the heap is a better choice. You will have to justify
what you did to get a positive grade.