package exc;

import java.util.ArrayList;

public class Student implements Element{
	private String name;
	private String email;
	
	private ArrayList<Element> l1 = new ArrayList<>();
	
	public Student (String n, String e) {
		name = n;
		email = e;
	}

	@Override
	public Element add(Element elm) {
		l1.add(elm);
		return elm;
		
	}

	@Override
	public void remove(Element elm) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void print() {
		System.out.println("      " + this.name + ", " + this.email);
	}

	@Override
	public void accpet(Visitor vis) {
		vis.visitStudent(this);
		for(Element el : l1)
			el.accpet(vis);
	}
	
	

}
