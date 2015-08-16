class Main{
	public static void main(String args[]){
		Calculator calc = new CalculatorImpl(1,2);
		int result = calc.add();
		System.out.println(result);
	}
}