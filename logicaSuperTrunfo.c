import java.util.*;
}


static List<Atributo> menuListaAtributos(Scanner sc) {
System.out.println("\nDigite a ordem de prioridade dos atributos (ex: 5 6 1)");
System.out.println("1) População | 2) Área | 3) PIB | 4) Pontos Turísticos | 5) Densidade | 6) PIB per capita");
while (true) {
String linha = sc.nextLine().trim();
String[] partes = linha.split("\\s+");
List<Atributo> lista = new ArrayList<>();
try {
for (String p : partes) {
if (p.isBlank()) continue;
int n = Integer.parseInt(p);
Atributo a = mapNumeroAtributo(n);
if (!lista.contains(a)) lista.add(a);
}
if (lista.size() >= 2) return lista;
System.out.print("Informe pelo menos 2 atributos. Tente novamente: ");
} catch (Exception e) {
System.out.print("Entrada inválida. Digite números separados por espaço: ");
}
}
}


static Atributo mapNumeroAtributo(int n) {
switch (n) {
case 1: return Atributo.POPULACAO;
case 2: return Atributo.AREA;
case 3: return Atributo.PIB;
case 4: return Atributo.PONTOS_TURISTICOS;
case 5: return Atributo.DENSIDADE;
case 6: return Atributo.PIB_PER_CAPITA;
default: throw new IllegalArgumentException("Número de atributo inválido: " + n);
}
}


static String ler(Scanner sc, String prompt, java.util.function.Predicate<String> valido) {
while (true) {
System.out.print(prompt);
String s = sc.nextLine();
if (valido.test(s)) return s.trim();
System.out.println("Valor inválido. Tente novamente.");
}
}


static long lerLong(Scanner sc, String prompt, java.util.function.LongPredicate valido) {
while (true) {
try {
System.out.print(prompt);
String s = sc.nextLine().trim().replace(".", "").replace(",", "");
long v = Long.parseLong(s);
if (valido.test(v)) return v;
} catch (Exception ignored) {}
System.out.println("Valor inválido. Tente novamente (inteiro).");
}
}


static double lerDouble(Scanner sc, String prompt, java.util.function.DoublePredicate valido) {
while (true) {
try {
System.out.print(prompt);
String s = sc.nextLine().trim().replace(".", "").replace(",", ".");
double v = Double.parseDouble(s);
if (valido.test(v)) return v;
} catch (Exception ignored) {}
System.out.println("Valor inválido. Tente novamente (número).");
}
}
}