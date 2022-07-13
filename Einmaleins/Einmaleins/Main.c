//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Einmaleins	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 14.12.2021 17:55:23
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Zeile=0;
	int i_Spalte = 0;



	//Code
	for (i_Zeile = 1; i_Zeile <= 10; i_Zeile++)
	{
		for (i_Spalte = 1; i_Spalte <= 10; i_Spalte++)
		{
			printf("%4i", i_Zeile * i_Spalte);
		}
		printf("\n");
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}