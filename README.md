# project-02-Geolocation

This program focuses on using structs, arrays, strings and file I/O. You will create an array of structs to store location information for various places of interest.  The target application is something like Google Maps where a user can make requests such as asking for restaurants that are near a certain location.

# Part A: Location Data 
## NOTE: THIS IS DUE BEFORE THE PROGRAM SO YOUR TEACHER CAN COMPILE THE FINAL TEST FILE WITH EVERYONE'S DATA. YOU WILL SUBMIT THIS IN BLACKBOARD BY THE DUE DATE. That will give your teacher time to combine everyone's data and give you all a complete file to test with. 

The code we are writing will be more interesting to use if we have a lot of data to work with.  Companies like Google have invested significant resources in identifying places of interest and recording their names, addresses, and locations along with some tags that are relevant for searching.  We don’t have the resources of a company like Google, but we have a lot of students.  So we will use a crowdsourcing approach by having each student provide information for at least 10 places of interest in the general Greenville/Spartanburg area.  You can include any place that you think an Upstate student would be likely to go.

```
For each location, we want the following information:
•	Name of the place of interest
•	Street address (or similar description) for the place (not a complete address, just enough information to find it if you were near that location)
•	One or more search tags for this place
•	The latitude of this place
•	The longitude of this place
```

For example, suppose you want to include the Starbucks near campus in our data file.  You know its name and address and can come up with some tags.  To find its latitude and longitude, you can go to this web page:
http://universimmedia.pagesperso-orange.fr/geo/loc.htm

You can add whatever search tags you think are appropriate, but Google provides a list of standard tags that would be useful to apply to your entries:
https://developers.google.com/maps/documentation/places/web-service/supported_types

You should put each place together on separate lines with a TAB between each field, as in:
```
Starbucks   2120 Boiling Springs Rd restaurant, coffee  35.0243 -81.9604
```
You are to choose at least 10 locations (for a C) and to come up with the same 5-field (name, street address, tag(s) separated by commas, longitude, latitude) entry for each location.  The locations should not be private residences and should not include offensive descriptions.  Put it all together in a file called XXXPlaces.txt where XXX are the initials of your name.  You can use any text editor you like or you can use Atom, but if you use an editor like Microsoft Word, be sure to save it as plain text. Submit this file to Blackboard not later than the due date. 
```
Grade of C: 10 locations
Grade of B: 25 locations
Grade of A: 50 locations
```
Grade will be determined by quantity and quality of the data. Don't invent fake data!


# Part B: build an array of locations using structs

Here is a sample of location data. Note each field is separated by a tab character (\t) 
```
Lieu's Asian Bistro 103 E Beacon Dr	restaurant	34.858560	-82.265042
Falls Park on the Reedy	601 S Main St	park	34.844720	-82.401151
Reys	20 N Main St	restaurant, bar	34.851328	-82.398565
Smoke On the Water	1 Augusta St #202	restaurant	34.843916	-82.404364

```

There is a sample program in the repository called parse.cpp that shows how to parse (separate) each of the fields. Use this code to construct the parser portion of this assignment. Or come up with your own. 

You will read the places from a text file called places.txt. There is sample file you can start with in this repository. BUT THE FINAL PROJECT MUST USE THE FILE CREATED BY THE ENTIRE CLASS. 

Here are some sample C++ programs in this repository that will help you with new concepts. 
```
parse.cpp - how to parse a string that has delimeters between each field of the string
getline.cpp - how to read an entire line of strings rather a single string
fileIO.cpp - how to read text data from a file
stod.cpp - how to convert a string like "34.2242" into a double precision floating point number
```
# Part C: processing user commands 

For this part of the assignment, you will write code to accept commands from the user once you've read the entire places file in. Your program should process the following commands. 

LIST - generate a list of ALL places 

FIND - read from the user the name of a place and list (in the format above) the data on that place

TAG - read from the user a tag and list ALL places which contain that tag 

RADIUS - read from the user latitude and longitude data followed by a radius, in miles, produce a list of places that are within that radius

For all places output, follow this format EXACTLY:
```
Name: Hughes Main Library
Address: 25 Heritage Green PL
Tag(s): library
Latitude: 34.8563
Longitude: -82.402

Name: Bon Secours Wellness Arena
Address: 650 N Academy St
Tag(s): stadium, tourist_attraction
Latitude: 34.8573
Longitude: -82.3969
```
Note the space after : and blank line between places

In dealing with distance on the surface of the earth, keep in mind, per the discovery attributed to Christopher Columbus, the earth is NOT flat. So check out this page for help. Use Spherical Law of Cosines for this assignment. https://www.movable-type.co.uk/scripts/latlong.html

const RADIUS = 3963.1676  // Earth radius in miles

# Grade Levels

# Style Guidelines and Grading:

Use lots of functions. Your main program should call each function. It should be like the table of contents of a book that is broken down into chapters. 

Follow good general style guidelines such as: appropriately using control structures like loops and if/else statements; avoiding redundancy using techniques such as functions, loops, and if/else factoring; good variable names, and naming conventions; and not having any lines of code longer than 100 characters. Use proper indentation for each line of code so code look neat, organized and easy to read.  

Comment descriptively at the top of your programs, each function, and on complex sections of your code.  Comments should explain each function’s behavior, parameters and returns.  

Don't forget the standard program comments at the top of your course code file. 

Name your file location.cpp and submit to CodePost by the due date. 


