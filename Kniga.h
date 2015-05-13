#pragma once
/** 
@file	Kniga.h
@brief	������������ ���� ������ �������
@copyright	��5-27�
@author	������, ��������, ��������
@date	13-05-2015
@version	alpha
\par ���������� ������
	@ref Kniga
\par �������� �����
	@ref Kniga
*/
/// ����� �������� ���������� ����
/** �������� ������ � ������ � ������ ��� ������ � ����
*/
class Kniga
{
protected:
	char *_Name;	///< �������� �����
	char *_Author;	///< ����� �����
	int _kol;	///< ���������� � ����������
	char *_Genre;	///< ����
	float _price; ///> ���� ������ �����
public:
	/// ����������� �� ���������
	/** ������� ����� ��� ������������� �����
	*/
	Kniga(void);	
	/// ����������� � ����������� ����� ������
	/** ������� ����� � �������������� � ����
	\ param Name �������� �����
	\ param Author ����� �����
	\ param kol ���������� � �������
	\ param Genre ���� �����
	\ param price ���� ������
	*/
	Kniga(char *Name,char *Author, int kol, char *Genre, float Price);
	/// ���������� ����������� �������
	~Kniga(void);
	/// ���������� ������ ���������� � �����
	/** ���� �������� ���, �� ���������� ��������� �� ������
	\return ������ � ������� � ����� � ������� (�������� �����, ����� �����, ���������� � ����������, ����, ����)
	*/
	char * getFullInfo();
/** \brief �������� ���������� ���� � ����������

	����� ���������� ��������� ������ � �����������
	@param changekol ����� ���������� ����
	@return ���������� ���������� �������� */
	bool changekol(int *newkol);
/** \brief �������� ���� �� �����

	����� ���������� ��������� ������ ��������
	@param newPrice ����� ���� �����
	@return ���������� ���������� �������� */
	bool changePrice(int *newPrice);

};

