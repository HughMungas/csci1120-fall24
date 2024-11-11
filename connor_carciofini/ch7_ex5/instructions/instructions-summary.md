## Instructions
Write a program that can be used to calculate the federal tax. The tax is calculated as follows: For single people, the standard exemption is $4,000; for married people, the standard exemption is $7,000. A person can also put up to 6% of his or her gross income in a pension plan. The tax rates are as follows: If the taxable income is:
* Between $0 and $15,000, the tax rate is 15%.
* Between $15,001 and $40,000, the tax is $2,250 plus 25% of the taxable income over $15,000.
* Over $40,000, the tax is $8,460 plus 35% of the taxable income over $40,000.
Prompt the user to enter the following information:
* Marital status
* If the marital status is “married,” ask for the number of children under the age of 14
* Gross salary (If the marital status is “married” and both spouses have income, enter the combined salary.)
* Percentage of gross income contributed to a pension fund

Your program must consist of at least the following functions:
 * Function `getData`: This function asks the user to enter the relevant data.
 * Function `taxAmount`: This function computes and returns the tax owed.

To calculate the taxable income, subtract the sum of the standard exemption, the amount contributed to a pension plan, and the personal exemption, which is $1,500 per person. (Note that if a married couple has two children under the age of 14, then the personal exemption is $1,500 ∗ 4 = $6,000.)

> Since your program handles currency, make sure to use a data type that can store decimals with a decimal precision of 2.

