var svg = d3.select("svg");
var margin = 200;
var width = svg.attr("width") - margin;
var height = svg.attr("height") - margin;

// title
svg
  .append("text")
  .attr("transform", "translate(100,0)")
  .attr("x", 80)
  .attr("y", 50)
  .attr("font-size", "24px")
  .attr("font-family", "sans-serif")
  .text("Stock Price Overtime");

var xScale = d3.scaleBand().range([0, width]).padding(0.4);
var yScale = d3.scaleLinear().range([height, 0]);

var g = svg.append("g").attr("transform", "translate(" + 100 + "," + 100 + ")");

d3.csv("./stock.csv").then((data) => {
  xScale.domain(data.map((d) => d.year));
  yScale.domain([0, d3.max(data, (d) => d.value)]);

  g.append("g")
    .attr("transform", "translate(0," + height + ")")
    .call(d3.axisBottom(xScale));

  g.append("g")
    .call(
      d3
        .axisLeft(yScale)
        .tickFormat((d) => `$${d}`)
        .ticks(10)
    )

  g.selectAll(".bar")
    .data(data)
    .enter()
    .append("rect")
    .attr("class", "bar")
    .on("mouseover", onMouseOver) // Add listener
    .on("mouseout", onMouseOut) // Add listener
    .attr("x", (d) => xScale(d.year))
    .attr("y", (d) => yScale(d.value))
    .attr("width", xScale.bandwidth())
    .attr("height", (d) => height - yScale(d.value));
});

function onMouseOver(d, i) {
  d3.select(this).attr("class", "highlight");
  d3.select(this)
    .transition()
    .duration(200)
    .attr("width", xScale.bandwidth() + 5)
    .attr("y", (d) => yScale(d.value) - 10)
    .attr("height", (d) => height - yScale(d.value) + 10);
}
function onMouseOut(d, i) {
  d3.select(this).attr("class", "bar");
  d3.select(this)
    .transition()
    .duration(200)
    .attr("width", xScale.bandwidth())
    .attr("y", (d) => yScale(d.value))
    .attr("height", (d) => height - yScale(d.value));
}
