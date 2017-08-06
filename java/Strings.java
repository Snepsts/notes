public class Strings
{
	public static void main(String[] args)
	{
		//play with strings, cat (add) them
		String myString = "This is a string";
		System.out.println("myString = " + myString);
		myString += ", and this is more.";
		System.out.println("myString = " + myString);
		myString += " \u00A9 2017";
		System.out.println("myString = " + myString);

		//notice how it doesn't add them as numbers, but it cats them as strings
		String numberString = "250.55";
		numberString += "49.95";
		System.out.println("numberString = " + numberString);

		//does the same as the above
		String lastString = "10";
		int myInt = 50;
		lastString += myInt;
		System.out.println("lastString = " + lastString);
		double doubleNumber = 120.47;
		lastString += doubleNumber;
		System.out.println("lastString = " + lastString);
	}
}
