function calcularPercentuais(faturamento) {
    const total = Object.values(faturamento).reduce((acc, curr) => acc + curr, 0);
    const percentuais = {};

    for (const estado in faturamento) {
        const percentual = (faturamento[estado] / total) * 100;
        percentuais[estado] = percentual.toFixed(2);
    }

    return percentuais;
}

function converterFaturamento(faturamento) {
    const novoFaturamento = {};

    for (const estado in faturamento) {
        const valorString = faturamento[estado].replace("R$", "").replace(".", "").replace(",", ".");
        const valorFloat = parseFloat(valorString);
        novoFaturamento[estado] = valorFloat;
    }

    return novoFaturamento;
}
faturamento = {
    SP: "R$67.836,43",
    RJ: "R$36.678,66",
    MG: "R$29.229,88",
    ES: "R$27.165,48",
    Outros: "R$19.849,53"
}
novoFaturamento = converterFaturamento(faturamento);
console.log(calcularPercentuais(novoFaturamento));
