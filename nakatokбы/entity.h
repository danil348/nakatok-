#pragma once
class entity
{
public:
	
protected:
	int satiety;
	int hungryFactor;
};

class fish: public entity
{
public:
	virtual void feed(int value) {};
	virtual void hungry() {};
protected:

};


class caras: public fish
{
public:
	caras();
	void feed(int value) override;
	void hungry() override;
private:

};

class okyn: public fish
{
public:
	okyn();
	void feed(int value) override;
	void hungry() override;
private:

};
