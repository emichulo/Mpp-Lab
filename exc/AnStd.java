package exc;

import java.util.ArrayList;

public class AnStd implements Element{
	private String name;
	
	private ArrayList<Element> l1 = new ArrayList<>();
	
	 public AnStd(String name) {
		this.name = name;
		
	}

	@Override
	public void print() {
		System.out.println(this.name);
		
	}

	@Override
	public Element add(Element elm) {
		// TODO Auto-generated method stub
		l1.add(elm);
		return elm;
		
		}

	@Override
	public void remove(Element elm) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void accpet(Visitor vis) {
		vis.visitAnStd(this);
		for(Element el : l1)
			el.accpet(vis);
		
	}

}
