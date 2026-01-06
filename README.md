##WPDS – Water Purity Diagnostic System
Overview

WPDS (Water Purity Diagnostic System) is a rule-based diagnostic tool that explains why water may be unsafe and what action may help, using simple physical and chemical indicators. The system focuses on cause-based reasoning rather than declaring water “safe” or “unsafe.”

WPDS is intentionally scoped to avoid false precision and does not replace laboratory testing.

#Hardware Demonstration – pH Sensing

An Arduino-based pH sensing setup is used to demonstrate relative pH classification (acidic / normal / basic). The sensor output is displayed as voltage, an approximate pH value, and a classified state.

The pH value shown is a baseline-normalized estimate intended for diagnostic reasoning rather than laboratory-grade accuracy. WPDS does not certify water safety and does not replace laboratory testing.

Hardware used

Arduino Uno

Analog pH sensor module with probe

Sample Preparation

Household-prepared samples were used for functional validation:

Clear drinking water – baseline sample

Mildly acidic water – prepared using a few drops of lemon juice

Mildly basic water – prepared using a small pinch of baking soda

Turbid water – prepared using clean soil to demonstrate physical contamination

These samples were used to demonstrate sensor response and classification behavior, not chemical calibration.

#Decision Logic

WPDS uses simple rule-based logic based on four inputs:

pH state (Acidic / Normal / Basic)

Turbidity (Low / High)

TDS (Normal / High)

Temperature treatment (Cold / Boiled)

#Outcomes

Abnormal pH or high TDS → Chemical contamination → No simple remediation

High turbidity → Physical contamination → Filtering required

All normal but not boiled → Possible biological risk → Boiling effective

All normal and boiled → Reduced biological risk → Boiling effective

#Limitations

Does not certify water safety

Does not detect microbes, viruses, or specific toxins

pH values are approximate and baseline-normalized

Intended for diagnostic reasoning and educational purposes only

Design Decisions

Used relative classification to avoid false precision

Explicitly separated sensing (hardware) from reasoning (software)

Included clear failure and non-coverage cases

#Live Demo

🔗 https://water-purity-wpds.my.canva.site/

#License

This project is provided for educational and research demonstration purposes.

#Project Links

A detailed explanation and reflections are available on the Notion project page.

https://www.notion.so/WPDS-Water-Purity-Diagnostic-System-2e09325d1ab1807e800ae59106be0fd9?source=copy_link
