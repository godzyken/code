package com.occalculatrice.servlets;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.occalculatrice.beans.Operation;

/**
 * Servlet implementation class Calcul
 */
@WebServlet("/Calcul")
public class Calcul extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public Calcul() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		this.getServletContext().getRequestDispatcher("/WEB-INF/calculatrice.jsp").forward(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		float nb1 = 0;
		float nb2 = 0;
		try {
			nb1 = Float.parseFloat(request.getParameter("nb1")); // méthode de l'objet Float qui permet de convertir un string en float
		} catch (NumberFormatException e) { // permet de prévoir le cas de l'entrée vide. 
		}
		if (request.getParameter("nb1").isEmpty()) { // le champ est alors remplacé par 0 si le string est vide.
			nb1 = 0;
		}
		try {
			nb2 = Float.parseFloat(request.getParameter("nb2"));
		} catch (NumberFormatException e) {

			if (request.getParameter("nb2").isEmpty()) {
				nb2 = 0;
			}
		}
		String operateur = request.getParameter("operateur");

		Operation ope = new Operation();
		float resultat = ope.calculer(nb1, nb2, operateur); // appel de la méthode calculer du bean "Operation"

		request.setAttribute("nb1", nb1); // permet de préparer les Expression Language
		request.setAttribute("nb2", nb2);
		request.setAttribute("operateur", operateur);
		request.setAttribute("resultat", resultat);

		this.getServletContext().getRequestDispatcher("/WEB-INF/calculatrice.jsp").forward(request, response);
	}

}
