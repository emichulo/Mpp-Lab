package exc;

import java.util.ArrayList;

public class Grp implements Element{
	private String name;
	private ArrayList<Element> l1 = new ArrayList<>();
	
	public Grp(String name) {
		this.name = name;
	}

	@Override
	public void print() {
		System.out.println(this.name);
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
	public void accpet(Visitor vis) {
		vis.visitGrp(this);
		for(Element el : l1)
			el.accpet(vis);
	}

}
