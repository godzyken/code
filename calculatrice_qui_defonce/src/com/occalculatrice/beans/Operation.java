package com.occalculatrice.beans;

public class Operation {

	private float resultat;
	
	public float calculer(float nb1, float nb2, String operateur) {
		switch (operateur) {
		case "+":
			resultat = nb1 + nb2;
			break;

		case "-":
			resultat = nb1 - nb2;
			break;

		case "x":
			resultat = nb1 * nb2;
			break;

		case "/":
			resultat = nb1 / nb2;
			break;

		case "%":
			resultat = nb1 % nb2;
			break;
		}

		return resultat;
	}
}
