const result = document.getElementById("result");

for (let i = 0; i < document.querySelectorAll("span").length; i++) {
  let btn = document.querySelectorAll("span")[i];
  btn.addEventListener("click", () => {
    const operation = btn.innerHTML;
    const num1 = Number(document.getElementById("1").value);
    const num2 = Number(document.getElementById("2").value);

    if (operation === "Add") {
      let ans = num1 + num2;
      result.innerText = `Result : (${ans})`;
    } else if (operation === "Subtract") {
      let ans = num1 - num2;
      result.innerText = `Result : (${ans})`;
    } else if (operation === "Multiply") {
      let ans = num1 * num2;
      result.innerText = `Result : (${ans})`;
    } else if (operation === "Divide") {
      let ans = num1 / num2;
      result.innerText = `Result : (${ans})`;
    } else {
      result.innerText = `Enter a Valid input!`;
    }
  });
}
