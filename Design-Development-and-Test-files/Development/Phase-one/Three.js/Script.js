//This Script defines the functionality to create cubes.

var startTime	= Date.now();
var container;
var camera, scene, renderer, stats;
var nearPlane = 1 ;
var farPlane= 1000;
var cube;
var cubeSize= 200;

initialize();
animate();


function initialize() {
	//Define Camera
	camera = new THREE.Camera( 70, window.innerWidth / window.innerHeight, nearPlane, farPlane );
	camera.position.y = 150;
	camera.position.z = 350;
//	camera.target.position.y = 150;
//camera.position.set( -15, 10, 15 );
//camera.lookAt( scene.position );
  //  camera.position.z = 1000;

  
  
	//Define Scene
	scene = new THREE.Scene();
	
	//Define a Cube
    cube = new THREE.Mesh(new THREE.CubeGeometry(cubeSize, cubeSize, cubeSize), new THREE.MeshBasicMaterial({
        wireframe: true,
    color: 0xff0000,
      }));

	cube.position.y = 150;

	//Add the cube to the scene
	scene.addObject( cube );
	
	//Create an element
	container = document.createElement( 'div' );
	
	//Add the element to page
	document.body.appendChild( container );
	
	//Create a renderer
	renderer = new THREE.WebGLRenderer();
	renderer.setSize( window.innerWidth, window.innerHeight );
	
	//Add the renderer to the element
	container.appendChild( renderer.domElement );
	
	stats = new Stats();
	stats.domElement.style.position = 'absolute';
	stats.domElement.style.top = '0px';
	container.appendChild( stats.domElement );
	
}//initialize 

function animate() {
	render();
	requestAnimationFrame( animate );
	stats.update();
}//animate



function render(){

	cube.rotation.x += 0.02;
	cube.rotation.y += 0.02;
	renderer.render( scene, camera );
}//render


function addCube(){
 /*               var cubeGeometry = new THREE.CubeGeometry(cubeSize,cubeSize,cubeSize);
                var cubeMaterial = new THREE.MeshBasicMaterial({
																//    wireframe: true,
																//    color: 0xff0000,
																//     }));
              
			   var cube = new THREE.Mesh(cubeGeometry, cubeMaterial);
			   
                cube.position.x = // random position within canvas 
				cube.position.y = // random position within canvas 
				cube.position.z = // random position within canvas 
				
                scene.add(cube);
           //	scene.addObject( cube );
		   */
}//addCube

function addFiveCubes(){
//	for(int i= 0; i >= 5 ; i++){
//	   cube = new THREE.Mesh(new THREE.CubeGeometry(200, 200, 200), new THREE.MeshBasicMaterial({
//        wireframe: true,
//    color: 0xff0000,
 //     }));
//	cube.position.y = 150;
	//Add the cube to the scene
//	scene.addObject( cube );
//	}//loop

}//addCubes

