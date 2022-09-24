const breadthFirstSearch = (node) => {
  const queue = [];
  for (let i = 0; i < visited.length; i++) {
    visited[i] = false;
  }
  visited[node] = true;
  queue.push(node);

  while (queue.length) {
    let currentNode = queue.shift();

    console.log(`visiting ${currentNode}`);
    for (let j = 0; j < graph[currentNode].length; j++) {
      if (graph[currentNode][j] === 1 && visited[j] === false) {
        visited[j] = true;
        queue.push(j);
      }
    }
  }
};
