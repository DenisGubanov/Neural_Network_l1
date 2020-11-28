#pragma once

class Neuron
{
private:
	double value;
	int lostLayer;
	int sizeLayer;
	int nextLayer;
	double weight[];
public:
	Neuron() {
		this->lostLayer = 0;
		this->sizeLayer = 0;
		this->nextLayer = 0;
		this->value = 0;
		this->weight[1] = { 1 };
	}
	Neuron(double value, int size, double weight[], int lost, int next) {
		this->lostLayer = lost;
		this->sizeLayer = size;
		this->nextLayer = next;
		this->value = value;
		this->weight[size] = weight[size];
	}
	void setValue(double value) {
		this->value = value;
	}
	double getValue() {
		return this->value;
	}
	void setLostLayer(int lostLayer) {
		this->lostLayer = lostLayer;
	}
	int getLostLayer() {
		return this->lostLayer;
	}
	void setSizeLayer(int sizeLayer) {
		this->sizeLayer = sizeLayer;
	}
	int getSizeLayer() {
		return this->sizeLayer;
	}
	void setNextLayer(int nextLayer) {
		this->nextLayer = nextLayer;
	}
	int getNextLayer() {
		return this->nextLayer;
	}
	void setWeight(double weight[]) {
		this->value = value;
	}
	double getWeight() { // Доделать
		return this->value;
	}
};

