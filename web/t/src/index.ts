let n: number = 0;

function r(n: number) {
    n++;
    console.log(n);
    if (n === 10) {
        return;
    }

    r(n);
}

r(n);
