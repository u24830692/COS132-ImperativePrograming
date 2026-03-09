2026/03/09

(This markdown page was due last week Friday according to my plan of things. Anyways its now Monday and I figured that maybe before i jump into my practical for this week maybe I should do a quick reflection on the things that I learnt through last weeks practical.)

In this practical we made a Spotify wrapped list using basic C++ concepts. In this markdown I will just be explaining the things that I learned while working on my practical:

1) I became more comfortable with using cout statements. In the practical we did use cout quite a lot.
"cout<< ... << endl;"

2) I also used "getline" a lot as well and I am certain I will not forget it. Before I did last week's practical I was not very sure how input is obtained from a use in c++. I know that in python it is eg. num = int(input("Enter your favorite number: ")), which I know like the back of my hand, I was so happy to finally know how to do it in c++ which is eg. :
...
int num;
cout << "Enter your favorite number: " << endl;
cin >> num;  ...

then for string input which is what we worked with a lot in this particular practical:
...
string artistName;
cout << "Enter the name of the artist you listen to the most: " << endl;
getline(cin, artisName);
... 

I leaned that when we request for input from a user that is in string form, like in the example above I was asking for the user to give me the name of an artist ... sometimes the requested string could be 2 seperate words eg Nicki Minaj, Jason Derulo, The Weeknd, Ariana Grande, etc. but in the case of our spotify receipt we want the artist's whole name even though they are separated by a spacing. That is when we use getline, getline literaly "gets the whole line" i.e. both parts of the persons name. 

3) Something that I found particularly interesting while doing this practical is the ".substr()" member function. I used it particularly in the Receipt.cpp of this practical, we were using it when we were trying to seperate the user input. Our user input would be in this format: 
TheWeeknd|BlindingLights|AfterHours|312|200.5|Pop
then we would use the ".substr()" to get the info between each |, so like when we want to get BlindingLights, we use ".substr()". 
so for example in the practical (Receipt.cpp) when I say:
"return receipt.substr(0, pipePos);"
this basically means extract information from position 0 of whatever information "receipt" is holding all the way until position "pipepos"-which by the calculations above "pipepos" is simply an integer. so i could have said 
"return receipt.substr(0, 10);" -> it will return what "receipt" is holding from postion 0 to position 10. 

--- I will probably continue my reflection another day, i want to get into my prac for this week ---