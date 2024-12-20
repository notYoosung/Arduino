#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix;
const int t = 10;
const uint32_t animation[][4] = {
	{
		0xffffffff,
		0xffffffff,
		0xffffffff,
		t
	},
	{
		0xffefffff,
		0xffffffff,
		0xffffffff,
		t
	},
	{
		0xffcffeff,
		0xffffffff,
		0xffffffff,
		t
	},
	{
		0xff8ffcff,
		0xefffffff,
		0xffffffff,
		t
	},
	{
		0xfc0fe0ff,
		0xff8ffcf,
		0xfeffffff,
		t
	},
	{
		0xf80fc0fe,
		0xff0ff8f,
		0xfcffefff,
		t
	},
	{
		0xf00f80fc,
		0xfe0ff0f,
		0xf8ff8ffe,
		t
	},
	{
		0xe00f00f8,
		0xfc0fe0f,
		0xf0ff8ffc,
		t
	},
	{
		0xc00e00f0,
		0xf80fc0f,
		0xe0ff0ff8,
		t
	},
	{
		0x800c00e0,
		0xf00f80f,
		0xc0fe0ff0,
		t
	},
	{
		0x800c0,
		0xe00f00f,
		0x80fc0fe0,
		t
	},
	{
		0x80,
		0xc00e00f,
		0xf80fc0,
		t
	},
	{
		0x0,
		0x800c00e,
		0xf00f80,
		t
	},
	{
		0x0,
		0x800c,
		0xe00f00,
		t
	},
	{
		0x0,
		0x8,
		0xc00e00,
		t
	},
	{
		0x0,
		0x0,
		0x800c00,
		t
	},
	{
		0x0,
		0x0,
		0x800,
		t
	},
	{
		0x0,
		0x0,
		0x800,
		t
	},
	{
		0x0,
		0x0,
		0x800c00,
		t
	},
	{
		0x0,
		0x8,
		0xc00e00,
		t
	},
	{
		0x0,
		0x800c,
		0xe00f00,
		t
	},
	{
		0x0,
		0x800c00e,
		0xf00f80,
		t
	},
	{
		0x80,
		0xc00e00f,
		0xf80fc0,
		t
	},
	{
		0x800c0,
		0xe00f00f,
		0x80fc0fe0,
		t
	},
	{
		0x800c00e0,
		0xf00f80f,
		0xc0fe0ff0,
		t
	},
	{
		0xc00e00f0,
		0xf80fc0f,
		0xe0ff0ff8,
		t
	},
	{
		0xe00f00f8,
		0xfc0fe0f,
		0xf0ff8ffc,
		t
	},
	{
		0xf00f80fc,
		0xfe0ff0f,
		0xf8ff8ffe,
		t
	},
	{
		0xf80fc0fe,
		0xff0ff8f,
		0xfcffefff,
		t
	},
	{
		0xfc0fe0ff,
		0xff8ffcf,
		0xfeffffff,
		t
	},
	{
		0xff8ffcff,
		0xefffffff,
		0xffffffff,
		t
	},
	{
		0xffcffeff,
		0xffffffff,
		0xffffffff,
		t
	},
	{
		0xffefffff,
		0xffffffff,
		0xffffffff,
		t
	},
	{
		0xffefffff,
		0xffffffff,
		0xffffffff,
		t
	}
};
void setup() {
  Serial.begin(11550);
  matrix.loadSequence(animation);
  matrix.begin();
  matrix.play(true);
}
void loop(){
}