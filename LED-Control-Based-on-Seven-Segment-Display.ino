
// Common Cathode 7-Segment Display

// Segment connections
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 10;
int g = 9;

//LED Connections
int redLed=13;
int greenLed=12;

void setup()
{
  //7-Segment Display Pin Setup
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  //LED Pins Setup
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}

void loop()
{
  // Display 0
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);

  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);

  // Display 1
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(1000);

  // Display 2
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);

  // Display 3
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(1000);

  // Display 4
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);

  // Display 5
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(1000);

  // Display 6
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);

  // Display 7
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(1000);

  // Display 8
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);

  // Display 9
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(1000);
}
