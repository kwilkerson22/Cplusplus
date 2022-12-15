# Cplusplus-Program

# Summarize the project and what problem it was solving.
I created an app that displays how investments grow over time (in years) using compound interest calculations
to encourage fiscal responsibility. Users are prompted to enter the following data: initial investment amount, 
monthly deposit, annual interest and number of years. Two charts are generated from this data. One chart displays 
yearly balance and interest without monthly deposits. The other chart displays yearly balance and interest with 
monthly deposits.

# What did you do particularly well?
I did a good job with organizing my functions and h file. I used formatting to ensure the account displays are easy 
to read and visually appealing.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I could incorporate vectors and pointers in an expanded version of this program. This would store all of the Bank
objects in one place where they could be called on later. Using pointers would reduce the overall memory demand
of the program.

# Which pieces of the code did you find most challenging to write, and how did you overcome this? 
# What tools or resources are you adding to your support network?
The most challenging pieces of code were the functions that calculated balances and interest with and without monthly 
deposits. My yearly balances were printing out correctly however my year end interest was not. In my testing of the 
program, I learned that I needed to make a seperate variable to track the amount of interest earned until a full year
was reached since interest was compounded monthly. I also learned that I needed to reset this variable each time a year
was reached in order for the program to fully work as intended. Keeping a library of my completed labs as a reference
guide has helped me work through challenges that I encountered when putting the pieces of this project together.

# What skills from this project will be particularly transferable to other projects or course work?
I feel more confident with using classes in my programs. I have learned how valuable unit testing and test cases 
are when it comes to completing a sucessful program.

# How did you make this program maintainable, readable, and adaptable?
My code is maintainable because my header and cpp files are well-organized. I made sure to incorporated detailed 
commenting as well. My code is readable because I followed whitespace and naming conventions to avoid clutting my 
programand make it flow easier. My code is adaptable because it follows OOP which allows the user to enter their 
unique data and the program makes the proper calculations based on their input.
