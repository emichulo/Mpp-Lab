package exc;

public class UnivStatistics implements Visitor{


	@Override
	public void visitAnStd(AnStd s) {
		s.print();		
	}

	@Override
	public void visitGrp(Grp g) {
		g.print();
	}

	@Override
	public void visitSubGrp(SubGrp s) {
		// TODO Auto-generated method stub
		s.print();
	}

	@Override
	public void visitStudent(Student std) {
		// TODO Auto-generated method stub
		std.print();
	}

}
