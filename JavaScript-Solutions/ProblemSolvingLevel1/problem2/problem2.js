function printName(){
    const nameInput = document.getElementById('nameInput');

    const name = nameInput.value.trim();

    const outputArea = document.getElementById('outputArea');

    if(name){
        outputArea.innerHTML = `<span class="font-bold text-lg">Name:</span> ${name}`;
        nameInput.value = '';
    }
    else{
        outputArea.innerHTML = `<span class="text-red-500">Please enter a valid name before submitting.</span>`;
    }

    document.getElementById('nameInput').addEventListener('keypress', function(event){
        if (event.key === 'Enter'){
            event.preventDefault();
            document.getElementById('printButton').click();
        }
    });
}