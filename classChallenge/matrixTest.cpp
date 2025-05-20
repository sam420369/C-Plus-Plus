while(i < x.getTotalElement() && j < y.getTotalElement()) {
	if (x.A.at(i).getI() < y.A.at(j).getI() || (x.A.at(i).getI() == y.A.at(j).getI() && x.A.at(i).getJ() < y.A.at(j).getJ()) && i < x.getTotalElement()) {
		A.at(i).setElem(x.A.at(i).getElem());
		A.at(i).setI(x.A.at(i).getI());
		A.at(i).setJ(x.A.at(i).getJ());
		i++;

	}
	else if (x.A.at(i).getI() == y.A.at(j).getI() && x.A.at(i).getJ() == y.A.at(j).getJ() && i < x.getTotalElement() && j < y.getTotalElement()) {
		A.at(i).setElem(x.A.at(i).getElem() + y.A.at(j).getElem());
		A.at(i).setI(x.A.at(i).getI());
		A.at(i).setJ(x.A.at(i).getJ());
		i++;
		j++;
		
	}
	else if (x.A.at(i).getI() == y.A.at(j).getI() && x.A.at(i).getJ() > y.A.at(j).getJ() && j < y.getTotalElement()) {
		A.at(j).setElem(y.A.at(j).getElem());
		A.at(j).setI(y.A.at(j).getI());
		A.at(j).setJ(y.A.at(j).getJ());
		j++;
	}
}
