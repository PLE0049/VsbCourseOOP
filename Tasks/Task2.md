## Task one [EN]



:warning: Keep your implementation, it may be required later !!!

## Druhý úkol [CZ]

Naimplementujte několik tříd, které budou simulovat dědičnou strukturu UI elementů desktopové apliakce.

1. Bázová třída UIElement
    * Obsahuje metodu void Render(), která vypíše string do konzole
    * Obsahuje atribut "name"
    * Obsahuje alespoň jeden konstruktor
2. Třída Button, která dědí ze třídy UIElement
    * Třída překrývá rodičovskou metodu Render.
    * Třída bude rozšířena o další atributy jako například výška a šířka nebo tooltip.
3. Třída Input, která dědí ze třídy UIElement
    * Třída bude rozšířena o pole text, color a font size.
4. Třída Form, která dědí z UI element a obsahuje pole Inputů, button a string s nadpisem.
    * Metoda render zavolá metody render všech inputů a buttonu.
    * Metody pro přidání inputu a buttonu

* Na závěr vytvořte ve funkci main několik instací daných tříd a pomocí debugu projděte volání konstruktorů.
* Zadání rozšiřte podle vlastního uvážení tak, abyste si vyzkoušeli další věci jako například statické položky, překrytí, přetížení atd. 
* Všechny názvy tříd budou v programu ANGLICKY.
* Cílem je naimplementovat dědičnou strukturu, aplikace nemusí mít žádné smysluplné chování.

Pro ukázku použití dědičnosti navštivte prezentace nebo [lecture 6 - school](Lecture6/School)

:warning: Uchovejte si vaše implementace, můžou být vyžádány později !!!
