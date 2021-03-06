# CSS502Project4

<html>

<head>
<meta http-equiv=Content-Type content="text/html; charset=windows-1252">
<meta name=Generator content="Microsoft Word 15 (filtered)">
</head>

<body lang=EN-US>

<div class=WordSection1>

<p class=MsoNormal align=center style='text-align:center'><span lang=EN>Assignment
4 Design</span></p>

<p class=MsoNormal align=center style='text-align:center'><span lang=EN>&nbsp;</span></p>

<p class=MsoNormal><span lang=EN>Overview: </span></p>

<p class=MsoNormal><span lang=EN>&nbsp;</span></p>

<p class=MsoNormal style='text-indent:.5in'><span lang=EN>The objective of this
program is to create an automated inventory tracking system for a movie rental
shop. There are many ways to go about the problem, ultimately, we decided to
make a system that would be easily scalable without compromising efficiency.</span></p>

<p class=MsoNormal style='text-indent:.5in'><span lang=EN>A binary search tree,
specifically a self-balancing AVL tree, is used to store all of the shop's
Movie inventory since it is necessary to store the movies in sorted order. The
AVL stores pointers to Movie objects in the data attribute of a Node, defined
by a struct nested inside the AVL class. A self-balancing AVL tree is used over
a normal BST in order to reduce the time (an average) required to retrieve a
movie from the tree to O(log n). This does sacrifice some efficiency for the
insert method (and delete though this will not really be used) on average,
however, the amount is minimal and the increase in efficiency for the retrieve
method is worthwhile. It’s reasonable to expect that a movie will likely only
be inserted once while retrieves will happen often for a movie rental store,
where a retrieval is needed every time a movie is checked out. Since the
sorting requirements for each movie differ based on genre, it is necessary to
store the Drama, Comedy, and Classic movies in separate AVL trees. We decided
to encapsulate the three different AVL trees in a Stock class, which
encompasses the entire inventory for the store.</span></p>

<p class=MsoNormal style='text-indent:.5in'><span lang=EN>A HashTable is used
to store unique Customer objects, which further store all of the data and
transaction data associated with the customers. By using a hash table, the time
to obtain the Customer information is constant, O(1), on average and therefore
extremely efficient. The hash function for the HashTable class is based on the
unique 4-digit customer ID. Assuming each customer is assigned a unique 4-digit
ID, the maximum number of customers is only 10,000, which requires a relatively
small amount of storage space in most cases. Because of this, we decided to
define our hash using an array of 1000 elements (to at least reduce the size
some in the case that there is limited space) and use open hashing to store
each customer a vector. This means that, in the worst case, each position in
the vector could hold a maximum of ten customer objects. This will provide for
efficient retrieval from the hash. We also decided to design our hash table
such that the has function was an isolated method from the get and insert
methods. As of now, the hash function is a simple mod 1000 of the customer ID,
but could be easily modified for increased security. </span></p>

<p class=MsoNormal style='text-indent:.5in'><span lang=EN>Inside the Customer
class, attributes are used to store the customer ID and name. A vector inside
the Customer class is used to store every customer Transaction (Borrow and
Return objects), making it easy to check/output the history of a customer.
These Borrow and Return classes store a pointer to the Movie involved in the
transaction. When the transactions are created, they modify the stock of the
Movie object to reflect the transaction. These classes could also be easily extended
to include time and date if desired. </span></p>

<p class=MsoNormal style='text-indent:.5in'><span lang=EN>One way we designed
the program to be easily scalable is by adding an input class to handle all of
the data parsing from the input files and initialization of the data objects,
with the help of setters in separate classes. This allows the input class to be
minimally modified (or another input class to be added) so that the program can
handle other types or formats of data without having to the change the code in
outside classes. The factory design pattern was also used in two instances to
increase scalability and maintain abstraction between the classes, allowing the
Input class to create the appropriate Movie and Transaction objects based on
the given file data. The factory design pattern is used for the Transaction
class, which the Borrow and Return subclasses inherit from, and the Movie
class, which the Drama, Comedy, and Classic subclasses inherit from. Since, in
the case of this program, it is not desired to have either Movie or Transaction
class objects exist on their own, they are declared as abstract classes and
both declare pure virtual methods, which their children must implement. By
structuring classes associated with the factory method this way, they are open
for extension (for ex, a new category/child of Movie can be easily added) but
closed to modification, since only the factory class would require a small
amount of additional code, and thus adhere to the open-close principle. The way
the program is structured also makes it easy to add an abstract Media class,
which the Movie class would inherit from, allowing the type of media managed by
the store to be extended to other types of media (Music, Books, etc). Since we
decided not to actually implement this, the AVL in our design stores pointers
to Movie objects in its Nodes. This would simply be changed to store pointers
to Media objects and a Media class could be added if it was desired to extend
the program to other media types.</span></p>

<p class=MsoNormal><span lang=EN>            The main (businessLogic) is simple
because almost all of the program’s operational components are abstracted in
the classes (see UML and main below). In the main, input file streams are
created to read in each of the three files, a Stock object (inventory) is
created to hold the movies, a HashTable object (customers) is created to hold
the customer data, and an Input object (in) is created to input the data. After
this, the input functions are called to read in the files for the data and
commands, the file streams and inventory/customers objects are passed as
arguments, and the program is complete.</span></p>

</div>

</body>

</html>
