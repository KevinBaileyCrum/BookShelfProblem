# BookShelfProblem
An excercise I worked on to get a little more comfortble with c++
specifications can be found here https://www.reddit.com/r/dailyprogrammer/comments/7vm223/20180206_challenge_350_easy_bookshelf_problem/
The link is a subreddit that contains programming excersizes
I'll post below the prompt:

"You have an enormous book collection and want to buy some shelfs. You go to a bookshelfstore and they sell all kinds of shelfs. The wierd part is, some shelfs are different in length but they all cost the same.

You now want to puzzle your collection so that you can fit as many books on the least number of shelfs"

notice the careful wording to avoid an NP hard problem.  I want to fit as many
books on the least number of shelves.  They cost the same and notice the
challenge does not ask to find an optimal or minimal numher of bookshelves
in terms of smallest ones.  Therefore I sort the shelves and just go by largest to smallest
## usage:

### $./prac filename

./prac invokes executable binary
filename such as ex1 shown below
where the first line is the available 
shelves and the following lines contain
the books starting with their size and 
followed with their title.

```
  150 150 300 150 150
  70 A Game of Thrones
  76 A Clash of Kings
  99 A Storm of Swords
  75 A Feasts for Crows
  105 A Dance With Dragons
```
