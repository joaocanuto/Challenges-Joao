async function obterDadosJson(){
    const response = await fetch('dados.json');
    const data = await response.json();
    return data;
}

async function obterDadosXml(){
    const response = await fetch('dados2.xml');
    const data = await response.text();
    // converte this data xml to json
    const parser = new DOMParser();
    const xml = parser.parseFromString(data, "application/xml");
    const rows = xml.getElementsByTagName('row');
    console.log(xml)
    const dados = [];
    for (let i = 0; i < rows.length; i++) {
        const dia = Number(rows[i].getElementsByTagName('dia')[0].textContent);
        const valor = Number(rows[i].getElementsByTagName('valor')[0].textContent);
        dados.push({ dia, valor });
    }
    return dados;
}


async function executar(){
    const dadosJson = await obterDadosJson();
    const dadosXml = await obterDadosXml();
    let menorValor = dadosJson[0].valor;
    let maiorValor = dadosJson[0].valor;
    let somaValores = 0;
    dadosJson.forEach(dado => {
        if(dado.valor < menorValor){
            menorValor = dado.valor;
        }
        if(dado.valor > maiorValor){
            maiorValor = dado.valor;
        }
        somaValores += dado.valor;
    });

    dadosXml.forEach(dado => {
        if(dado.valor < menorValor){
            menorValor = dado.valor;
        }
        if(dado.valor > maiorValor){
            maiorValor = dado.valor;
        }
        somaValores += dado.valor;
    });
    // encontrando o numero de vezes que o faturamento ficou maior que a media
    let media = somaValores / (dadosJson.length + dadosXml.length);
    let faturamentoMaiorQueMedia = 0;
    dadosJson.forEach(dado => {
        if(dado.valor > media){
            faturamentoMaiorQueMedia++;
        }
    });
    dadosXml.forEach(dado => {
        if(dado.valor > media){
            faturamentoMaiorQueMedia++;
        }
    });
    console.log(`Menor valor: ${menorValor}`);
    console.log(`Maior valor: ${maiorValor}`);
    console.log(`Média: ${media}`);
    console.log(`Faturamento maior que a média: ${faturamentoMaiorQueMedia} vezes`)

}

executar();
