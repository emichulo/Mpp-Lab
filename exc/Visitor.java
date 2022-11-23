package exc;

public interface Visitor {
	public void visitAnStd(AnStd s);
	public void visitGrp(Grp g);
	public void visitSubGrp(SubGrp s);
	public void visitStudent(Student std);

}
