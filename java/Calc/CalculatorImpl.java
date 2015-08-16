class CalculatorImpl implements Calculator{

	private int a,b;

	CalculatorImpl(int a, int b){
		this.a = a;
		this.b = b;
	}
	
	public int add(){
		int c = a + b;
		return c;
	}
}