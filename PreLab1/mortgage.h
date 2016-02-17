class Mortgage {
	private:
		double Principal;
		double Rate;
		double Payment;
	public:
		Mortgage();
		Mortgage(double, double, double);
		~Mortgage();
		void credit(double);
		double getPrincipal();
		void amortize();
};